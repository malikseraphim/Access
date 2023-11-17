import cars from "./data.js";

const formBtn = document.querySelector('.form_button')
const catalogBtn = document.querySelector('.catalog_button')
const $form = document.querySelector('.form')
const $catalog = document.querySelector('.catalog');


        catalogBtn.addEventListener('click', function() {
            cars.forEach(car => {
                let item = ``;
                item = `
                <div class="item">
                    <img src=${car.image} alt="#">
                    <h2 class="model">${car.model}</h2>
                    <p class="price">${car.price}</p>
                    <button class="btn">Buy</button>
                </div> 
                `
            
                $catalog.insertAdjacentHTML("beforeend", item)
            })
        }) 
        
        formBtn.addEventListener('click', function() {
            let form = `
            <form>
                <input type="email" placeholder="Email" class="form_email">
                <input type="password" placeholder="Password" class="form_password">
                <button class="form_btn">Log in</button>
            </form>
        `
        
            $form.insertAdjacentHTML("beforeend", form)
        })
($catalog.innerHTML != `
    <div class="item">
        <img src=${car.image} alt="#">
        <h2 class="model">${car.model}</h2>
        <p class="price">${car.price}</p>
        <button class="btn">Buy</button>
    </div> 
    ` && $form.innerHTML != `
    <form>
        <input type="email" placeholder="Email" class="form_email">
        <input type="password" placeholder="Password" class="form_password">
        <button class="form_btn">Log in</button>
    </form>
    `)


window.addEventListener('click', function(event) {
    console.log('Hi')
})



console.log(formBtn, catalogBtn)

