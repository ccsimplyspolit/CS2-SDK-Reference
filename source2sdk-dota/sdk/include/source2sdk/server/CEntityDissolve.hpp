#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EntityDissolveType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEntityDissolve : public source2sdk::server::CBaseModelEntity
        {
        public:
            float m_flFadeInStart; // 0x778            
            float m_flFadeInLength; // 0x77c            
            float m_flFadeOutModelStart; // 0x780            
            float m_flFadeOutModelLength; // 0x784            
            float m_flFadeOutStart; // 0x788            
            float m_flFadeOutLength; // 0x78c            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x790            
            source2sdk::client::EntityDissolveType_t m_nDissolveType; // 0x794            
            VectorWS m_vDissolverOrigin; // 0x798            
            std::uint32_t m_nMagnitude; // 0x7a4            
            
            // Datamap fields:
            // CUtlSymbolLarge InputDissolve; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEntityDissolve because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEntityDissolve) == 0x7a8);
    };
};
