#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sBounceInfo.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_WitchDoctor_DeathWard : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWard;
            char m_hWard[0x4]; // 0x580            
            std::int32_t bonus_accuracy; // 0x584            
            std::int32_t m_iDamage; // 0x588            
            std::int32_t m_iBounceRadius; // 0x58c            
            std::int32_t m_iProjectileSpeed; // 0x590            
            source2sdk::entity2::GameTime_t m_fWardExpireTime; // 0x594            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x598            
            uint8_t _pad059c[0x4]; // 0x59c
            // m_BounceInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sBounceInfo> m_BounceInfo;
            char m_BounceInfo[0x18]; // 0x5a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_WitchDoctor_DeathWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_WitchDoctor_DeathWard) == 0x5b8);
    };
};
