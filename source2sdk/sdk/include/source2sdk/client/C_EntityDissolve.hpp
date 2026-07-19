#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/EntityDissolveType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xff8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_EntityDissolve : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0fb0[0x8]; // 0xfb0
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xfb8            
            // metadata: MNotSaved
            float m_flFadeInStart; // 0xfbc            
            // metadata: MNotSaved
            float m_flFadeInLength; // 0xfc0            
            // metadata: MNotSaved
            float m_flFadeOutModelStart; // 0xfc4            
            // metadata: MNotSaved
            float m_flFadeOutModelLength; // 0xfc8            
            // metadata: MNotSaved
            float m_flFadeOutStart; // 0xfcc            
            // metadata: MNotSaved
            float m_flFadeOutLength; // 0xfd0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNextSparkTime; // 0xfd4            
            // metadata: MNotSaved
            source2sdk::client::EntityDissolveType_t m_nDissolveType; // 0xfd8            
            // metadata: MNotSaved
            VectorWS m_vDissolverOrigin; // 0xfdc            
            // metadata: MNotSaved
            std::uint32_t m_nMagnitude; // 0xfe8            
            // metadata: MNotSaved
            bool m_bCoreExplode; // 0xfec            
            // metadata: MNotSaved
            bool m_bLinkedToServerEnt; // 0xfed            
            uint8_t _pad0fee[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EntityDissolve because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EntityDissolve) == 0xff8);
    };
};
