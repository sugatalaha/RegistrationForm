import mongoose from "mongoose";
import dotenv from "dotenv";
import app from "./src/index.js"
dotenv.config();
(async ()=>
{
    try
    {
    await mongoose.connect(`${process.env.DB_LINK}/${process.env.DATABASE}${process.env.EXTENSION}`)
    console.log("Mongo DB connected")
    }
    catch(error)
    {
        console.log("MONGO DB connection failed: ",error)
    }
})()

app.listen(process.env.PORT, () => {
    console.log(`Server listening on port ${process.env.PORT || 3000} `, `http://127.0.0.1:${process.env.PORT}`)
})