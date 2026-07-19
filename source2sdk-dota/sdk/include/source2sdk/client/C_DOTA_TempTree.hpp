#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xbc8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_TempTree : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0ac0[0x30]; // 0xac0
            source2sdk::entity2::GameTime_t m_fExpireTime; // 0xaf0            
            VectorWS m_vecTreeCircleCenter; // 0xaf4            
            bool m_bCanApplyTreeCostume; // 0xb00            
            bool m_bIsMangoTree; // 0xb01            
            uint8_t _pad0b02[0x6]; // 0xb02
            // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_ParticleList;
            char m_ParticleList[0x18]; // 0xb08            
            bool m_bIsPartOfFowSystem; // 0xb20            
            uint8_t _pad0b21[0xa7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_TempTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_TempTree) == 0xbc8);
    };
};
