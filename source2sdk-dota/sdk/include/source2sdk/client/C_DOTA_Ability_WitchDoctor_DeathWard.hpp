#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sBounceInfo.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x6e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_WitchDoctor_DeathWard : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWard;
            char m_hWard[0x4]; // 0x6a8            
            std::int32_t bonus_accuracy; // 0x6ac            
            std::int32_t m_iDamage; // 0x6b0            
            std::int32_t m_iBounceRadius; // 0x6b4            
            std::int32_t m_iProjectileSpeed; // 0x6b8            
            source2sdk::entity2::GameTime_t m_fWardExpireTime; // 0x6bc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6c0            
            uint8_t _pad06c4[0x4]; // 0x6c4
            // m_BounceInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sBounceInfo> m_BounceInfo;
            char m_BounceInfo[0x18]; // 0x6c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_WitchDoctor_DeathWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_WitchDoctor_DeathWard) == 0x6e0);
    };
};
