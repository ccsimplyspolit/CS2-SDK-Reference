#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // Size: 0xcf8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CParticleSystem : public source2sdk::server::CBaseModelEntity
        {
        public:
            char m_szSnapshotFileName[512]; // 0x770            
            bool m_bActive; // 0x970            
            bool m_bFrozen; // 0x971            
            uint8_t _pad0972[0x2]; // 0x972
            float m_flFreezeTransitionDuration; // 0x974            
            // metadata: MNotSaved
            std::int32_t m_nStopType; // 0x978            
            bool m_bAnimateDuringGameplayPause; // 0x97c            
            uint8_t _pad097d[0x3]; // 0x97d
            // metadata: MNotSaved
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0x980            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x988            
            float m_flPreSimTime; // 0x98c            
            Vector m_vServerControlPoints[4]; // 0x990            
            std::uint8_t m_iServerControlPointAssignments[4]; // 0x9c0            
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x100]; // 0x9c4            
            bool m_bDataStringLocalized; // 0xac4            
            uint8_t _pad0ac5[0x3]; // 0xac5
            CUtlString m_strDataString; // 0xac8            
            bool m_bNoSave; // 0xad0            
            bool m_bNoFreeze; // 0xad1            
            bool m_bNoRamp; // 0xad2            
            bool m_bStartActive; // 0xad3            
            uint8_t _pad0ad4[0x4]; // 0xad4
            CUtlSymbolLarge m_iszEffectName; // 0xad8            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0xae0            
            std::int32_t m_nDataCP; // 0xce0            
            Vector m_vecDataCPValue; // 0xce4            
            std::int32_t m_nTintCP; // 0xcf0            
            Color m_clrTint; // 0xcf4            
            
            // Datamap fields:
            // CUtlString cpoint%d_value[64]; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CParticleSystem) == 0xcf8);
    };
};
