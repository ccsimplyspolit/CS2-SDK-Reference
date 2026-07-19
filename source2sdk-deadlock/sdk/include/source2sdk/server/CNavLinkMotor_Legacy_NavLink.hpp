#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNavLinkMotor_Legacy_Transition.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CNavLinkAreaEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CNavLinkMotor_Legacy_GraphController;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CNavLinkMotor_Legacy_NavLink : public source2sdk::server::CNavLinkMotor_Legacy_Transition
        {
        public:
            // metadata: MSaveOpsForField
            source2sdk::server::CNavLinkMotor_Legacy_GraphController* m_pGraphController; // 0x30            
            // m_hNavLinkEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CNavLinkAreaEntity> m_hNavLinkEntity;
            char m_hNavLinkEntity[0x4]; // 0x38            
            std::int32_t m_nNavLinkIndex; // 0x3c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMotor_Legacy_NavLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMotor_Legacy_NavLink) == 0x40);
    };
};
