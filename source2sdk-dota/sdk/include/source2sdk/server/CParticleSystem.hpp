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
        // Size: 0xd00
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CParticleSystem : public source2sdk::server::CBaseModelEntity
        {
        public:
            char m_szSnapshotFileName[512]; // 0x778            
            bool m_bActive; // 0x978            
            bool m_bFrozen; // 0x979            
            uint8_t _pad097a[0x2]; // 0x97a
            float m_flFreezeTransitionDuration; // 0x97c            
            // metadata: MNotSaved
            std::int32_t m_nStopType; // 0x980            
            bool m_bAnimateDuringGameplayPause; // 0x984            
            uint8_t _pad0985[0x3]; // 0x985
            // metadata: MNotSaved
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0x988            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x990            
            float m_flPreSimTime; // 0x994            
            Vector m_vServerControlPoints[4]; // 0x998            
            std::uint8_t m_iServerControlPointAssignments[4]; // 0x9c8            
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x100]; // 0x9cc            
            bool m_bDataStringLocalized; // 0xacc            
            uint8_t _pad0acd[0x3]; // 0xacd
            CUtlString m_strDataString; // 0xad0            
            bool m_bNoSave; // 0xad8            
            bool m_bNoFreeze; // 0xad9            
            bool m_bNoRamp; // 0xada            
            bool m_bStartActive; // 0xadb            
            uint8_t _pad0adc[0x4]; // 0xadc
            CUtlSymbolLarge m_iszEffectName; // 0xae0            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0xae8            
            std::int32_t m_nDataCP; // 0xce8            
            Vector m_vecDataCPValue; // 0xcec            
            std::int32_t m_nTintCP; // 0xcf8            
            Color m_clrTint; // 0xcfc            
            
            // Datamap fields:
            // CUtlString cpoint%d_value[64]; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CParticleSystem) == 0xd00);
    };
};
