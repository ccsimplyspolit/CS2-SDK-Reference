#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkAnimgraphVar
        {
        public:
            // metadata: MPropertyFriendlyName "Animgraph Navlink Type"
            // metadata: MPropertyDescription "The value of the 'e_navlink_type' or 'e_navlink_type_shared' parameter that should be set on the NPC's animgraph as it starts a 'navlink' movement handshake."
            // metadata: MPropertyAttributeEditor "AnimGraphParamEnumValue()"
            // metadata: MPropertyEditContextOverrideValue
            CGlobalSymbol m_sAnimGraphNavlinkType; // 0x0            
            // metadata: MPropertyFriendlyName "Alignment Degrees"
            // metadata: MPropertyDescription "Amount of angular slack the animation has when aligning to the navlink. 0 indicates that it must be strictly aligned."
            std::uint32_t m_unAlignmentDegrees; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkAnimgraphVar, m_sAnimGraphNavlinkType) == 0x0);
        static_assert(offsetof(source2sdk::server::CNavLinkAnimgraphVar, m_unAlignmentDegrees) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CNavLinkAnimgraphVar) == 0x10);
    };
};
