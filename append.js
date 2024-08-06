//   head: {
//     value: 10
//     next: {
//       value: 5
//       next: {
//         value: 16
//         next: null
//       }
//     }
//   }
// };

class LinkedList {
  constructor(value) {
    this.head = {
      value: value,
      next: null
    };
    this.tail = this.head;
    console.log(this.tail);
    this.length = 1;
  }
  append(value) {
    //Code here
    const newNode={
        value:value,
        next:null,
    };
    this.tail.next=newNode;
    this.tail=newNode;
    this.length++;
  }
  prepend(value)
  {
    const newNode={
        value:value,
        next:null,
    }
    
   newNode.next=this.head;
   this.head=newNode;
   this.length++;

  }
  

}

let myLinkedList = new LinkedList(10);
myLinkedList.append(5);
myLinkedList.append(16);
myLinkedList.prepend(1);
// myLinkedList.append(20);
console.log(myLinkedList);
// myLinkedList.append(16);