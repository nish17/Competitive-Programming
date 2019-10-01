const data = [
  {
    name: "Array",
    type: "Linear Data structure",
    description: "Array is a data structure used to store homogeneous elements at contiguous locations. Size of an array must be provided before storing data.",
    complexity:{
      access_time: "O(1)",
      search_time: "O(n)",
      insert_time: "O(n)",
      delete_time: "O(n)"
    },
    link: "https://www.youtube.com/results?search_query=Array",
    linkDescription: "Videos on Array"
  
  },
  {
    name: "Linked list",
    type: "Linear Data structure",
    description: "A linked list is a linear data structure (like arrays) where each element is a separate object. Each element (that is node) of a list is comprising of two items – the data and a reference to the next node.",
    complexity:{
      access_time: "O(n)",
      search_time: "O(n)",
      insert_time: "O(1)",
      delete_time: "O(1)"
    },
    types: ['Singly LinkedList','Doubly LinkedList', 'Circular LinkedList'],
    link: "https://www.youtube.com/results?search_query=Linked+List",
    linkDescription: "Videos on Linked list"
  },
  {
    name: "Stack",
    type: "Linear Data structure",
    description: "A stack or LIFO (last in, first out) is an abstract data type that serves as a collection of elements, with two principal operations: push, which adds an element to the collection, and pop, which removes the last element that was added.",
    complexity:{
      access_time: "O(n)",
      insert_time: "O(1)",
      delete_time: "O(1)"
    },
    link: "https://www.youtube.com/results?search_query=Stack",
    linkDescription: "Videos on Stack"
    
    
  },
  {
    name: "Queue",
    type: "Linear Data structure",
    description: "A queue or FIFO (first in, first out) is an abstract data type that serves as a collection of elements, with two principal operations: enqueue, the process of adding an element to the collection",
    complexity:{
      access_time: "O(n)",
      insert_time: "O(1)",
      delete_time: "O(1)"
    },
    types: ['Circular Queue'],
    link: "https://www.youtube.com/results?search_query=Queue",
    linkDescription: "Videos on Queue"
  },
  {
    name: "Binary Tree",
    type: "Hierarchical data structures",
    description: "A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. It is implemented mainly using Links.",
    complexity:{
      time_complexity: "O(n)",
      space_complexity: "O(n)"
    },
    link: "https://www.youtube.com/results?search_query=Binary+Tree",
    linkDescription: "Videos on Binary Tree"
  },
  {
    name: "Binary Search Tree",
    type: "Hierarchical data structures",
    description: "Binary Search Tree is a node-based binary tree data structure. The left subtree of a node contains only nodes with keys lesser than the node's key. The right subtree of a node contains only nodes with keys greater than the node's key.",
    complexity:{
      Search :  "O(h)",
      insert : "O(h)",
      delete : "O(h)"
    },
    link: "https://www.youtube.com/results?search_query=Binary+Search+Tree",
    linkDescription: "Videos on Binary Search Tree"
  },
  {
    name: "Hashing",
    type: "Extension of linear Data Structure",
    description: "A function that converts a given big input key to a small practical integer value. The mapped integer value is used as an index in hash table. A good hash function should have following properties Efficiently computable and Should uniformly distribute the keys",
    complexity: {
      search: "O(n)",
      insert: "O(n)",
      delete: "O(n)"
    },
    link: "https://www.youtube.com/results?search_query=Hashing",
    linkDescription: "Videos on Hashing"
  } 
];

module.exports = {
data:data,
}