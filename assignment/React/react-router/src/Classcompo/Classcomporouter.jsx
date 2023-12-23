import React, { Component } from 'react';
import { Route, Routes } from 'react-router-dom';
import Classcompomenu from './Classcompomenu';
import Classcompointro from './Classcompointro';

class Classcomporouter extends Component {
    render(){
        return(
            <>
            
            <Routes>
                <Route path='/' element={<Classcompomenu/>}>
                    <Route path='Classcompointro' element={<Classcompointro/>}/>  
                </Route>
            </Routes>
           
        
            </>
        )
    }
}

export default Classcomporouter