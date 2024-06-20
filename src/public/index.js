const btn=document.getElementsByTagName('button')[0]
btn.addEventListener('click',()=>
{
    const username = document.getElementById('username').value
    const password = document.getElementById('password').value
    const email = document.getElementById('email').value
    if([username,email,password].some((field)=>{field?.trim()===''}))
        {
            alert('All fields must be filled');
            return;
        }
    const user =
    {
        username: username,
        email: email,
        password: password
    }
    console.log(user)
    fetch('http://127.0.0.1:3000/userreg', {
        method: "POST", 
        headers: {
            "Content-Type": "application/json",
        },
        body: JSON.stringify(user) // body data type must match "Content-Type" header
    })
    .then((response)=>
    {
        if(response.status===200){
            window.location.href = 'src/public/success.html'
        }
        else if(response.status===400){
            window.location.href = 'src/public/error400.html'
        }
    })
    .catch((error)=>
    {
        window.href.location ='src/public/error500.html'
    })
}
)
