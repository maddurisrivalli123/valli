import React from 'react';
import { useHistory } from 'react-router-dom';
import classes from './SignIn.module.css';
import { GoogleLogin } from 'react-google-login';


 const SignIn = () => {
     const onSuccess = (res) =>{
         console.log(res.profileObj);
         history.push("/routing");
     }
     const onFailure = (res) =>{
         console.log(res);
     }
    

    const history = useHistory();

    function handleClick() {
        history.push("/routing");
    }

    return (<div style={{display:'flex',justifyContent:'center',alignContent:'center'}}>
        <GoogleLogin
    clientId="148730292611-q449eq3pm3tokgp1fgntkn0jf6ebuvpt.apps.googleusercontent.com"
    buttonText="Login"
    onSuccess={onSuccess}
    onFailure={onFailure}
    cookiePolicy={'single_host_origin'}
    // isSignedIn={true}
  />

    </div>
        // <button type="button" className={classes.button} onClick={handleClick}>
        //     sign in
        // </button>
            // <div class="g-signin2" data-onsuccess={(googleUser)=>onSignIn(googleUser)}></div>
    );
}

export default SignIn
