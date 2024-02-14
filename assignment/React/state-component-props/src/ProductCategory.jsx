import React from 'react';

class ProductCategory extends React.Component {
  render() {
    const { name } = this.props;
    return (
      <div className="product-category">
        <h3>{name}</h3>
      </div>
    );
  }
}

export default ProductCategory;
