//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LINKACTIONACTIVATIONLINKACTIONACTIVATIONIMPL_HPP
#define FUML_LINKACTIONACTIVATIONLINKACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../LinkActionActivation.hpp"

#include "impl/ActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class LinkActionActivationImpl :virtual public ActionActivationImpl, virtual public LinkActionActivation 
	{
		public: 
			LinkActionActivationImpl(const LinkActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LinkActionActivationImpl& operator=(LinkActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			LinkActionActivationImpl();



		public:
			//destructor
			virtual ~LinkActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool endMatchesEndData(std::shared_ptr<fUML::Link>  link,std::shared_ptr<uml::LinkEndData>  endData)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Association> getAssociation()  ;
			
			/*!
			 */ 
			virtual bool linkMatchesEndData(std::shared_ptr<fUML::Link>  link,std::shared_ptr<Bag<uml::LinkEndData> >  endDataList)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_LINKACTIONACTIVATIONLINKACTIONACTIVATIONIMPL_HPP */
