import React, { useEffect, useState } from "react";
import "./App.css";

const App = () => {
  const [categories, setCategories] = useState([]);
  const [loading, setLoading] = useState(true);

  useEffect(() => {
    fetchCategories();
  }, []);

  const fetchCategories = async () => {
    try {
      const response = await fetch(
        "https://www.themealdb.com/api/json/v1/1/categories.php"
      );
      const data = await response.json();
      setCategories(data.categories);
      setLoading(false);
    } catch (error) {
      console.error("Error fetching categories:", error);
      setLoading(false);
    }
  };

  return (
    <div className="App">
      <header>
        <h1>Meal Categories</h1>
      </header>
      {loading ? (
        <p>Loading...</p>
      ) : (
        <div className="categories-container">
          {categories.map((category) => (
            <div key={category.idCategory} className="category-card">
              <img src={category.strCategoryThumb} alt={category.strCategory} />
              <h2>{category.strCategory}</h2>
              <p>{category.strCategoryDescription}</p>
            </div>
          ))}
        </div>
      )}
    </div>
  );
};

export default App;
