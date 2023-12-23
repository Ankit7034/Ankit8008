import React, { Suspense } from 'react';
import { createBrowserRouter } from 'react-router-dom';
import Navbar from './Navbar';
import Home from './Home';
import Product from './Product';
import Example from './Example'; 
const Classcomporouter = React.lazy(() => import('./Classcompo/Classcomporouter'))
const About = React.lazy(() => import('./About'))


const Mainrouter = createBrowserRouter([
    {
        path : "/",
        element : <><Navbar/></>
    },

    {   
        path : "/home",
        element : <><Navbar/> <Home/></>
    },

    {   
        path : "/about",
        element : <><Navbar/>
        <Suspense fallback={<h1>Loading</h1>}><About/></Suspense>
         </>
    },

    {   
        path : "/product",
        element : <><Navbar/> <Product/></>
    },

    {   
        path : "/example",
        element : <><Navbar/> <Example/></>,
        children : [
            {
                path : "classcompo/*",
                element : <><Suspense fallback={<h1>Loading...</h1>}><Classcomporouter/></Suspense></>
            }
        ]
    },
])

export default Mainrouter