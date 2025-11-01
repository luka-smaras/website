function popup(x) {
            // Get the first (and only) <dialog> element on the page
            var dialogElement = document.getElementsByTagName("dialog")[0];

            // Fail silently if the element is not found
            if (!dialogElement) {
                return;
            }

            // Fixed switch syntax and used native <dialog> methods
            switch (x) {
                case 0: // Close
                    dialogElement.close();
                    break;
                case 1: // Open
                    // showModal() displays the dialog and a modal backdrop
                    dialogElement.showModal();
                    break;
                default:
                    break;
            }
        }
