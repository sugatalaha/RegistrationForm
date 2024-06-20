import {User} from "../models/user.model.js"

export const saveUser=async (req,res)=>
    {
        const {username,email,password}=req.body
        if([username,email,password].some((field)=>
        {
            return field?.trim()==="";
        }))
        {
            return res.status(404).json({message:"No field should be empty"});
        }
        const savedUser=await User.findOne(
            {
                $or:[{email:email},{username:username}]
            }
        )
        if(savedUser){
            return res.status(400).json({message:"User already registered"})
        }
        try{
            const createdUser=await User.create(
                {
                    username:username,
                    email:email,
                    password:password
                }
            )
            return res.status(200).json({message:"User saved successfully",user:createdUser})
        }
        catch(error)
        {
            return res.status(500).json({message:"Error while saving user details"})
        }
    }
