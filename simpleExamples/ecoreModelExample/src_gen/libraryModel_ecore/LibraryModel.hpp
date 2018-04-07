//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECORE_LIBRARYMODEL_HPP
#define LIBRARYMODEL_ECORE_LIBRARYMODEL_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace libraryModel_ecore
{
	class LibraryModel_ecoreFactory;
}

//Forward Declaration for used types
namespace libraryModel_ecore 
{
	class Author;
}

namespace libraryModel_ecore 
{
	class Book;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace libraryModel_ecore 
{
	/*!
	 */
	class LibraryModel : virtual public ecore::EObject 

	{
		public:
 			LibraryModel(const LibraryModel &) {}
			LibraryModel& operator=(LibraryModel const&) = delete;

		protected:
			LibraryModel(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~LibraryModel() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<libraryModel_ecore::Author>> getAuthors() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<libraryModel_ecore::Book>> getBook() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<libraryModel_ecore::Author>> m_authors;
			/*!
			 */
			std::shared_ptr<Bag<libraryModel_ecore::Book>> m_book;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: LIBRARYMODEL_ECORE_LIBRARYMODEL_HPP */
