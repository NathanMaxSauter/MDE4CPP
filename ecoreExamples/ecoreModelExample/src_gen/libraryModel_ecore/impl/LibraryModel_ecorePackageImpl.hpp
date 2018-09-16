//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECOREPACKAGEIMPL_HPP
#define LIBRARYMODEL_ECOREPACKAGEIMPL_HPP

#include "ecore/EcorePackage.hpp"
#include "ecore/impl/EPackageImpl.hpp"

#include "libraryModel_ecore/LibraryModel_ecorePackage.hpp"

namespace libraryModel_ecore 
{	class Author;
	class Book;
	class LibraryModel;
	class NamedElement;
	class Picture;
}

namespace ecore
{
	class EcoreFactory;
}


namespace libraryModel_ecore
{
	class LibraryModel_ecorePackageImpl : public ecore::EPackageImpl ,virtual public LibraryModel_ecorePackage
	{
		private:    
			LibraryModel_ecorePackageImpl(LibraryModel_ecorePackageImpl const&) = delete;
			LibraryModel_ecorePackageImpl& operator=(LibraryModel_ecorePackageImpl const&) = delete;

		protected:
			LibraryModel_ecorePackageImpl();

		public:
			virtual ~LibraryModel_ecorePackageImpl();

			// Begin Class Author
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getAuthor_EClass() const ;
			
			
			
			
			// End Class Author

			// Begin Class Book
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getBook_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getBook_EReference_authors() const ;
			virtual std::shared_ptr<ecore::EReference> getBook_EReference_library() const ;
			virtual std::shared_ptr<ecore::EReference> getBook_EReference_pictures() const ;
			
			
			// End Class Book

			// Begin Class LibraryModel
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getLibraryModel_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getLibraryModel_EReference_authors() const ;
			virtual std::shared_ptr<ecore::EReference> getLibraryModel_EReference_book() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getLibraryModel_EOperation_printLibrary() const ;
			
			// End Class LibraryModel

			// Begin Class NamedElement
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getNamedElement_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getNamedElement_EAttribute_name() const ;
			
			
			
			// End Class NamedElement

			// Begin Class Picture
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getPicture_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getPicture_EAttribute_pageNumber() const ;
			
			virtual std::shared_ptr<ecore::EReference> getPicture_EReference_book() const ;
			
			
			// End Class Picture

			

		private:
			std::shared_ptr<ecore::EClass> m_author_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_book_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_libraryModel_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_namedElement_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_picture_EClass = nullptr;
			
			
			std::shared_ptr<ecore::EAttribute> m_namedElement_EAttribute_name = nullptr;
			std::shared_ptr<ecore::EAttribute> m_picture_EAttribute_pageNumber = nullptr;
			
			std::shared_ptr<ecore::EReference> m_book_EReference_authors = nullptr;
			std::shared_ptr<ecore::EReference> m_libraryModel_EReference_authors = nullptr;
			std::shared_ptr<ecore::EReference> m_libraryModel_EReference_book = nullptr;
			std::shared_ptr<ecore::EReference> m_picture_EReference_book = nullptr;
			std::shared_ptr<ecore::EReference> m_book_EReference_library = nullptr;
			std::shared_ptr<ecore::EReference> m_book_EReference_pictures = nullptr;
			
			std::shared_ptr<ecore::EOperation> m_libraryModel_EOperation_printLibrary = nullptr;
			

			friend class LibraryModel_ecorePackage;

			static bool isInited;
			static LibraryModel_ecorePackage* create();
			bool isInitialized = false;
 			bool isCreated = false;

			virtual void init(std::shared_ptr<ecore::EPackage> package);

		public:
			void createPackageContents(std::shared_ptr<ecore::EPackage> package);
			void initializePackageContents();

		private:
			void createAuthorContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createBookContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createLibraryModelContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createNamedElementContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createPictureContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);

			void initializeAuthorContent();
			void initializeBookContent();
			void initializeLibraryModelContent();
			void initializeNamedElementContent();
			void initializePictureContent();
			void initializePackageEDataTypes();



	};
}
#endif /* end of include guard: LIBRARYMODEL_ECOREPACKAGEIMPL_HPP */