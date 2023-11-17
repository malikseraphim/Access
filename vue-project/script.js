const App = {
    data() {
        return {
            counter: 0,
            title: 'List notes',
            placeholderStr: 'Enter name of note',
            inputValue: '',
            notes: ['Note 1', 'Note 2', 'Note 3']
        }
    },
    methods: {
        inputChangeHandler(event) {
            this.inputValue = event.target.value
        },
        addNewNote() {
            if (this.inputValue !== '') {
                this.notes.push(this.inputValue);
                this.inputValue = '';
            }
        },
        toUpperCase(item) {
            return item.toUpperCase()
        },
        removeNote(index) {
            this.notes.splice(index, 1)
        },
        removeAll() {
            this.notes = []
        }

    },
    computed: {
        
    }
}

const app = Vue.createApp(App);

app.mount('#app')