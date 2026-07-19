#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"

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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysFixed : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flLinearFrequency; // 0x508            
            float m_flLinearDampingRatio; // 0x50c            
            float m_flAngularFrequency; // 0x510            
            float m_flAngularDampingRatio; // 0x514            
            bool m_bEnableLinearConstraint; // 0x518            
            bool m_bEnableAngularConstraint; // 0x519            
            uint8_t _pad051a[0x6]; // 0x51a
            CUtlSymbolLarge m_sBoneName1; // 0x520            
            CUtlSymbolLarge m_sBoneName2; // 0x528            
            
            // Datamap fields:
            // float InputSetLinearFrequency; // 0x0
            // float InputSetLinearDampingRatio; // 0x0
            // float InputSetAngularFrequency; // 0x0
            // float InputSetAngularDampingRatio; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysFixed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysFixed) == 0x530);
    };
};
