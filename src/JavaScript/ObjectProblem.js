export const TestingJS = (params) => { }


// Example - Input :
// {
//   "id": 123,
//   "name": "abc",
//   "address": {
//     "hno": "1",
//     "state": "Delhi",
//     "country": "India",
//     "phone": {
//       "primaryPhone" : "111111",
//       "alternatePhone" : "222222"
//     },
//     "email": {
//       "primaryEmail" : "a@b.com",
//       "alternateEmail" : "c@d.com"
//     }
//   }
// }

// Expected Output:
// {
//   "id": 123,
//   "name": "abc",
//   "hno": "1",
//   "state": "Delhi",
//   "country": "India",
//   "primaryPhone" : "111111",
//   "alternatePhone" : "222222"
//   "primaryEmail" : "a@b.com",
//   "alternateEmail" : "c@d.com"
// }



function testNumber() {
    console.log('testNumber')

    let currentObj = {
        "id": 123,
        "name": "abc",
        "address": {
            "hno": "1",
            "state": "Delhi",
            "country": "India",
            "phone": {
                "primaryPhone": "111111",
                "alternatePhone": "222222"
            },
            "email": {
                "primaryEmail": "a@b.com",
                "alternateEmail": "c@d.com"
            }
        }
    }
    let finalObj = {};
    Object.entries(currentObj).map((value) => {
        if (typeof value[1] === 'object') {
            Object.entries(value[1]).map((values2) => {
                if (typeof values2[1] === 'object') {
                    Object.entries(values2[1]).map((values3) => {
                        finalObj[values3[0]] = values3[1];
                    })
                } else {
                    finalObj[values2[0]] = values2[1];
                }
            })
        } else {
            finalObj[value[0]] = value[1]
        }

    })
    console.log('finalObj', finalObj)
    //   for(let i of currentObj.ge)  
}
testNumber()