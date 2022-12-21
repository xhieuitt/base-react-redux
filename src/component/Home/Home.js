import Header from '../Header/Header';
import { Outlet, Link } from "react-router-dom";


const Home = () => {
    return (
        <div className="app-container">
            <div id="header-container">
                <Header />
            </div>
            <div id="main-contain">
                <div id="sidenav-container">

                </div>
                <div id="app-content">
                    <Outlet />
                </div>
            </div>
        </div>
    )
}
export default Home