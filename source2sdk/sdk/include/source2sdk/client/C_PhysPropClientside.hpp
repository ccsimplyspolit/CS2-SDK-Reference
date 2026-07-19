#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1320
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PhysPropClientside : public source2sdk::client::C_BreakableProp
        {
        public:
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flTouchDelta; // 0x12f0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_fDeathTime; // 0x12f4            
            // metadata: MNotSaved
            VectorWS m_vecDamagePosition; // 0x12f8            
            // metadata: MNotSaved
            Vector m_vecDamageDirection; // 0x1304            
            // metadata: MNotSaved
            source2sdk::client::DamageTypes_t m_nDamageType; // 0x1310            
            uint8_t _pad1314[0xc];
            
            // Datamap fields:
            // float m_impactEnergyScale; // 0x1258
            // bool forcemotiondisabled; // 0x7fffffff
            // bool phys_start_asleep; // 0x7fffffff
            // float fademaxdist; // 0x7fffffff
            // float fademindist; // 0x7fffffff
            // float fadescale; // 0x7fffffff
            // float scale; // 0x7fffffff
            // const char * skin; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PhysPropClientside because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PhysPropClientside) == 0x1320);
    };
};
