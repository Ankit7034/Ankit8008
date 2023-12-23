import React, { Component } from 'react';
import { Link, Outlet } from 'react-router-dom';

class Classcompomenu extends Component {
    render(){
        return(
            <>
            <ul>
                <li><Link to='Classcompointro'>ClassUser</Link></li>
            </ul>
            <Outlet/>
            </>
        )
    }
}

export default Classcompomenu