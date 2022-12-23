import ModalCreatUser from "./ModalCreatUser";
import "./ManageUsers.scss"
import { FcPlus } from 'react-icons/fc';
import { useState } from "react";

const ManageUsers = (props) => {
    const [showModalCreatUser, setShowModalCreatUser] = useState(false)
    return (
        <div className="manage-user-container">
            <div className="title">
                Manage User
            </div>
            <div className="users-content">
                <div className="btn-add-new">
                    <button className="btn btn-primary" onClick={() => setShowModalCreatUser(true)}><FcPlus />Add new users</button>
                </div>
                <div className="table-users-container">
                    Table users
                </div>
                <ModalCreatUser
                    show={showModalCreatUser}
                    setShow={setShowModalCreatUser}
                />
            </div>
        </div>

    )
}
export default ManageUsers;