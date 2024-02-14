import React from 'react';
import TodoList from './TodoList';
import TodoListClass from './TodoListClass';

function App() {
  return (
    <div className="App">
      <h1>React List</h1>
      <TodoList />
      <hr />
      <TodoListClass />
    </div>
  );
}

export default App;
