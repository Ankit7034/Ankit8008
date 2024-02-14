import React, { Component } from 'react';
import { Button } from 'react-bootstrap';

class ProductCart extends Component {
  constructor(props) {
    super(props);
    this.state = {
      cartItems: [],
    };
  }

  render() {
    return (
      <div className="product-cart">
        <h2>My Cart</h2>
        <Button variant="primary">Checkout</Button>
      </div>
    );
  }
}

export default ProductCart;

