import React from 'react';
import ReactDOM from 'react-dom/client';
// import App from './App';
import Mainrouter from "./Mainrouter"
import { RouterProvider } from 'react-router-dom';


const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <RouterProvider router={Mainrouter}>

  </RouterProvider>
);