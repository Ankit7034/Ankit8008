import React, { Component } from 'react';

class TodoListClass extends Component {
  constructor(props) {
    super(props);
    this.state = {
      todos: [],
      newTodo: '',
    };
  }

  addTodo = () => {
    if (this.state.newTodo.trim()) {
      this.setState((prevState) => ({
        todos: [...prevState.todos, prevState.newTodo],
        newTodo: '',
      }));
    }
  };

  render() {
    return (
      <div>
        <input
          type="text"
          value={this.state.newTodo}
          onChange={(e) => this.setState({ newTodo: e.target.value })}
          placeholder="Enter a new todo"
        />
        <button onClick={this.addTodo}>Add</button>
        <ul>
          {this.state.todos.map((todo, index) => (
            <li key={index}>{todo}</li>
          ))}
        </ul>
      </div>
    );
  }
}

export default TodoListClass;
