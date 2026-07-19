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
        // Size: 0xad0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_EntityDissolve : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0a88[0x8]; // 0xa88
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xa90            
            // metadata: MNotSaved
            float m_flFadeInStart; // 0xa94            
            // metadata: MNotSaved
            float m_flFadeInLength; // 0xa98            
            // metadata: MNotSaved
            float m_flFadeOutModelStart; // 0xa9c            
            // metadata: MNotSaved
            float m_flFadeOutModelLength; // 0xaa0            
            // metadata: MNotSaved
            float m_flFadeOutStart; // 0xaa4            
            // metadata: MNotSaved
            float m_flFadeOutLength; // 0xaa8            
            // metadata: MNotSaved
            source2sdk::client::EntityDissolveType_t m_nDissolveType; // 0xaac            
            // metadata: MNotSaved
            std::uint32_t m_nMagnitude; // 0xab0            
            // metadata: MNotSaved
            VectorWS m_vDissolverOrigin; // 0xab4            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNextSparkTime; // 0xac0            
            // metadata: MNotSaved
            bool m_bCoreExplode; // 0xac4            
            // metadata: MNotSaved
            bool m_bLinkedToServerEnt; // 0xac5            
            uint8_t _pad0ac6[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EntityDissolve because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EntityDissolve) == 0xad0);
    };
};
