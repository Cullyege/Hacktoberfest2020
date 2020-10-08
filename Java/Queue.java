

class queue{
	int size,f,r;
	int[] arr=new int[5];
	
	queue(int size,int f,int r){
		this.size=size;
		this.f=f;
		this.r=r;
	}
	
	void push(int val){
		if(size==arr.length){
			System.out.println("queue overflow");
		}else{
			r=(f+size) % arr.length;
			arr[r]=val;
			size++;
			System.out.println("push element-"+arr[r]);
		}
	}

	void pop(){
		if(size==0){
			System.out.println("queue underflow");
		}else{
			size--;
			f= f % arr.length;
			System.out.println("popped element-" + arr[f]);
		 f++;}
	}

	void display(){
		for(int i=0;i<size;i++){
			int idx=(f+i) % arr.length;
			System.out.print(arr[idx]+" ");
		}
	}

	public static void main(String[] args) {
		queue q=new queue(0,0,0);
		q.push(10);
		q.push(20);
		q.push(30);
		q.push(40);
		q.push(50);
		q.push(60);

		q.pop();
		q.pop();

		q.push(60);
		q.display();
		q.pop();
		q.pop();
		q.pop();
		q.pop();

		q.push(90);
		q.display();
	}
}
