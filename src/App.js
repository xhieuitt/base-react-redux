import './App.scss';
import Header from './component/Header/Header';
import { Outlet } from "react-router-dom";


const App = () => {

  return (
    <div className="app-container">
      <div className="header-container">
        <Header />
      </div>

      <div className="main-contain">
        <div className="sidenav-container">
        </div>

        <div iclassNamed="app-content">
          <Outlet />
        </div>
      </div>
    </div>

  );
}

export default App;
