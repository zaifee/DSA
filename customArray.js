class MyArray{

    constructor(){
        this.length =0;
        this.data = {};
    }    
    
    // Implment push method
    push(item){
       this.data[this.length] = item;
       this.length++;
    }
    // Implement get Method 
    
    get(index){
        return this.data[index];
    }
    
    
    
    
};

const array1 = new MyArray();
array1.push(2);
array1.push(3);
let findElement = array1.get(0);
console.log(`Your element is not present ${findElement}`);
console.log(array1);
