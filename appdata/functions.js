function popup(x) {
            var dialogElement = document.getElementsByTagName("dialog")[0];

            switch (x) {
                case 0: 
                    dialogElement.close();
                    break;
                case 1:
                    dialogElement.showModal();
                    break;
                default:
                    break;
            }
        }
