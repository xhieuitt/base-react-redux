import ModalCreatUser from "./ModalCreatUser";
import "./ManageUsers.scss"
const ManageUsers = (props) => {
    return (
        <div className="manage-user-container">
            <div className="title">
                Manage User
            </div>
            <div className="users-content">
                <div>
                    <button>Add new users</button>
                </div>
                <div>
                    Table users
                </div>
                <ModalCreatUser />
            </div>
        </div>

    )
}
export default ManageUsers;