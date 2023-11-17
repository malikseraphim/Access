const requestUrl = "https://jsonplaceholder.typicode.com/users";


function sendRequest(method, url, body = null) {
    return new Promise((resolve, reject) => {
        const xhr = new XMLHttpRequest();

        xhr.open(method, url);
        xhr.responseType = 'json';
        xhr.setRequestHeader('Content-Type', 'application/json')
        
        xhr.onload = () => {
            if(xhr.status >= 400) {
                console.error(xhr.response);
            } else {
                console.log(xhr.response);
            }
        }
        
        xhr.onerror = () => {
            console.log(xhr.response);
        }
        
        xhr.send(JSON.stringify(body));
    })
}

const body = {
    name: 'Malik',
    age: 18,
}

sendRequest('POST', requestUrl, body)
    .then(data => console.log(data))
    .catch(err => console.error(err))