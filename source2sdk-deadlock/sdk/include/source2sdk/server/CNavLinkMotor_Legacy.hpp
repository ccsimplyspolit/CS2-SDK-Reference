#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BodySectionAuthority_t.hpp"
#include "source2sdk/server/CNavLinkMotor_Legacy_NavLink.hpp"
#include "source2sdk/server/CNavLinkMotor_Legacy_Transition.hpp"
#include "source2sdk/server/INavLinkMotor.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        #pragma pack(push, 1)
        class CNavLinkMotor_Legacy : public source2sdk::server::INavLinkMotor
        {
        public:
            std::int32_t m_nMode; // 0x18            
            source2sdk::client::BodySectionAuthority_t m_eBodySectionAuthority; // 0x1c            
            source2sdk::server::CNavLinkMotor_Legacy_Transition m_transition; // 0x20            
            source2sdk::server::CNavLinkMotor_Legacy_NavLink m_navLink; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMotor_Legacy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMotor_Legacy) == 0x90);
    };
};
