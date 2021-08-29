let asia = {
	india: {
		state: {
			up: {
				district: {
					d1: "Noida",
					d2: "Fatehpur",
					d3: "Agra",
					d3: "Prayagraj"
				}
			},
			bihar: {
				district:{
					d1: "Patna",
					d2: "baliya"
				}
			}
		}
	},
	china: {
		chuichaw: "kumfupanda"
	},
	pakistan: "Mulla"
}

let output = {

}

makeOutput =(pacific, parent)=> {
	for(let key in pacific){
		if(typeof pacific[key] === "object"){
			makeOutput(pacific[key], parent+"_"+key);
		}
		else{
			output[parent+"_"+key] = pacific[key];
		}
	}
}
makeOutput(asia, "asia")

console.log(output);