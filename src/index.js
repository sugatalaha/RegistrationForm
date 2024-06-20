import express from "express"
import { saveUser } from "./controllers/user.controller.js";
import path,{dirname} from "path"
import {fileURLToPath} from "url"
import dotenv from "dotenv"
dotenv.config();

const app=express();
const __dirname = fileURLToPath(dirname(import.meta.url))
app.use('/src/public', express.static(path.join(__dirname,"public")))
app.use(express.json());
app.get('/',(req,res)=>
{
    res.sendFile(path.join(__dirname,"public","index.html"))
})
app.post('/userreg',saveUser)

export default app;
