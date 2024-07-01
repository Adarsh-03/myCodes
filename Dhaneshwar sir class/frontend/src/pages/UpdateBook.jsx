import { Component, useState } from "react";
import axios from "axios";
import { SERVER_URL } from "../serverUrl";
import { useNavigate } from "react-router-dom";
import BackButton from "../components/BackButton";
import Spinner from "../components/Spinner";
import { useParams } from "react-router-dom";

const UpdateBook = () => {
  const [title,setTitle]=useState("");
  const [author,setAuthor]=useState("");
  const [year,SetYear]=useState("");
  const [loading,setLoading] =useState("");
  const navigate =useNavigate();
  const {id} = useParams();
  console.log("Book id",id);

  const handleSave= async()=>{
    const data ={title,author,year}
    try {
      setLoading(true);
      await axios.post(`${SERVER_URL}/book`,data);
      setLoading(false);
      navigate("/");
    } catch (error) {
      console.log(error);
      setLoading(false);
    }
  }
  return (
  <>
  <div className="text-3xl text-center bg-red-300">Update Book</div>;
  {loading?<Spinner/>:""}
  <div className="my-4 flex flex-col border-2 border-sky-600 rounded-xl w-[600px] p-4 mx-auto">
    <BackButton/>
  <div className="my-4">
    <label className="text-xl mr-4 text-gray-600">Title</label>
    <input
    type="text"
    value={title}
    onChange={(e)=>{setTitle(e.target.value)}}
    className="border-2 border-gray-500 px-4 py-2 w-full"
    />
  </div>
  <div className="my-4">
    <label className="text-xl mr-4 text-gray-600">Author</label>
    <input
    type="text"
    value={author}
    onChange={(e)=>{setAuthor(e.target.value)}}
    className="border-2 border-gray-500 px-4 py-2 w-full"
    />
  </div>
  <div className="my-4">
    <label className="text-xl mr-4 text-gray-600">Publisher Year</label>
    <input
    type="text"
    value={year}
    onChange={(e)=>{SetYear(e.target.value)}}
    className="border-2 border-gray-500 px-4 py-2 w-full"
    />
  </div>
  <button className="p-2 bg-sky-700 m-8 text-white" onClick={handleSave}>Save</button>
  </div>
  </>
  )
};
export default UpdateBook;