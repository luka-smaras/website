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

        /*
         * This function runs once the entire page is loaded to safely attach
         * the event listener for closing the modal by clicking the backdrop.
         */
        window.onload = function() {
            var dialogEl = document.getElementsByTagName("dialog")[0];

            // Fail silently if the element is not found
            if (dialogEl) {
                // Listener to close the modal if the user clicks the backdrop.
                // This logic is simpler and often more reliable for native dialogs.
                dialogEl.addEventListener('click', function(event) {
                    // Check if the element that received the click event (event.target) 
                    // is the <dialog> element itself. If it is, the user clicked the backdrop.
                    if (event.target === dialogEl) {
                        dialogEl.close();
                    }
                });
            }
        };
