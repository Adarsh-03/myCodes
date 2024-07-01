import { initializeApp } from 'firebase/app'
import {
    collection, getFirestore, getDocs,
    addDoc, deleteDoc, doc, onSnapshot,
    query, where,
    orderBy
} from 'firebase/firestore'

import{
    getAuth,
    createUserWithEmailAndPassword
} from 'firebase/auth'

const firebaseConfig = {
    apiKey: "AIzaSyCkBA60y61o4lASxsXFDdSlHKOZ9fKDzus",
    authDomain: "fir-9-4f9be.firebaseapp.com",
    projectId: "fir-9-4f9be",
    storageBucket: "fir-9-4f9be.appspot.com",
    messagingSenderId: "859107681552",
    appId: "1:859107681552:web:13c715d3afbb54f222f195"
}

// firebase.initializeApp(firebaseConfig)

// init start
initializeApp(firebaseConfig)


// init services
const db = getFirestore()

const auth = getAuth()

// collection ref
const colRef = collection(db, 'books')  // here reference of collection of books from db is stored into colRef


// // get collection data
// getDocs(colRef)     //to get all the doucument files stored in column reference
//     .then((snapshot) => {
//         // console.log(snapshot.docs)

//         let books = []  //created a array of books
//         snapshot.docs.forEach((doc) => {
//             books.push({ ...doc.data(), id: doc.id })
//         })
//         console.log(books);
//     })

//     .catch(err => {
//         console.log(err.message)
//     })


//to get all the doucument files stored in column reference
// Real time collection data
// onSnapshot(colRef, (snapshot) => {      // this new function () will send us the new snapshot everytime when there is change in collection.
//     let books = []  //created a array of books
//     snapshot.docs.forEach((doc) => {
//         books.push({ ...doc.data(), id: doc.id })
//     })
//     console.log(books);
// })


// queries
const q = query(colRef, where("author", "==", "adarsh"), orderBy('title', 'desc'))
// real time collection data of particular query
onSnapshot(q, (snapshot) => {      // this new function () will send us the new snapshot everytime when there is change in collection.
    let books = []  //created a array of books
    snapshot.docs.forEach((doc) => {
        books.push({ ...doc.data(), id: doc.id })
    })
    console.log(books);
})

///adding doc.
const addBookForm = document.querySelector('.add')
addBookForm.addEventListener('submit', (e) => {
    e.preventDefault()


    addDoc(colRef, {
        title: addBookForm.title.value,
        author: addBookForm.author.value,
    })
        .then(() => {
            addBookForm.reset()
        })
})


//   delete doc.
const deleteBookForm = document.querySelector('.delete')
deleteBookForm.addEventListener('submit', (e) => {
    e.preventDefault()

    const docRef = doc(db, 'books', deleteBookForm.id.value)
    deleteDoc(docRef)
        .then(() => {
            deleteBookForm.reset()
        })
})


// singing users up

const signupform = document.querySelector('.signup')
signupform.addEventListener('submit', (e) => {
    e.preventDefault()

    const email = signupform.email.value
    const password = signupform.password.value
    createUserWithEmailAndPassword(auth, email, password )
        .then((cred) => {
            console.log('user created:', cred.user)
            signupform.reset()
        })
        .catch((err) => {
            console.log(err.message)
        })
})