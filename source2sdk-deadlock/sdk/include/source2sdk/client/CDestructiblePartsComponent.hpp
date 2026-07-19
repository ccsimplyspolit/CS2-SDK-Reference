#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraphDestructibleParts_GraphController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
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
        // Standard-layout class: true
        // Size: 0x70
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_hOwner"
        #pragma pack(push, 1)
        class CDestructiblePartsComponent
        {
        public:
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x0            
            uint8_t _pad0028[0x20]; // 0x28
            // m_vecDamageTakenByHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_vecDamageTakenByHitGroup;
            char m_vecDamageTakenByHitGroup[0x18]; // 0x48            
            // metadata: MNetworkEnable
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseModelEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x60            
            uint8_t _pad0064[0x4]; // 0x64
            // metadata: MSaveOpsForField
            source2sdk::client::CBaseAnimGraphDestructibleParts_GraphController* m_pAnimGraphDestructibleGraphController; // 0x68            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsComponent, __m_pChainEntity) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsComponent, m_vecDamageTakenByHitGroup) == 0x48);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsComponent, m_hOwner) == 0x60);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsComponent, m_pAnimGraphDestructibleGraphController) == 0x68);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsComponent) == 0x70);
    };
};
