import React from "react";
import {BrowserRouter, Routes, Route} from "react-router-dom"
import Home from "./Home";
import About from "./About";
import Product from "./Product";
import Navbar from "./Navbar";
function App() {
  return (
      <>
          <BrowserRouter>
          <Routes>
               {/* <Route path="/" element={<><Navbar/> <Home/></>}/>
               <Route path="/about" element={<About/>}/>
               <Route path="/product" element={<Product/>}/> */}

               <Route path="/" element={<Navbar/>}>
                   <Route path="home" element={<Home/>}/>
                   <Route path="about" element={<About/>}/>
                   <Route path="product" element={<Product/>}/>
               </Route>

               
          </Routes>
          </BrowserRouter>
      </> 
  );
}

export default App;