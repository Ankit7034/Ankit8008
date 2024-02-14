import React from 'react';
import ProductCategory from './ProductCategory';
import ProductCart from './ProductCart';
import './App.css';
function App() {
  return (
    <div className="App">
      <h1>Shopping App</h1>
      <ProductCategory name="Electronics" />
      <ProductCategory name="Clothing" />
      <ProductCart />
    </div>
  );
}

export default App;
