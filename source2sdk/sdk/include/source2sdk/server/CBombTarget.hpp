#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Size: 0x948
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CBombTarget : public source2sdk::server::CBaseTrigger
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnBombExplode; // 0x8e8            
            source2sdk::entity2::CEntityIOOutput m_OnBombPlanted; // 0x900            
            source2sdk::entity2::CEntityIOOutput m_OnBombDefused; // 0x918            
            bool m_bIsBombSiteB; // 0x930            
            bool m_bIsHeistBombTarget; // 0x931            
            bool m_bBombPlantedHere; // 0x932            
            uint8_t _pad0933[0x5]; // 0x933
            CUtlSymbolLarge m_szMountTarget; // 0x938            
            // m_hInstructorHint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInstructorHint;
            char m_hInstructorHint[0x4]; // 0x940            
            std::int32_t m_nBombSiteDesignation; // 0x944            
            
            // Datamap fields:
            // void OnBombExplode; // 0x0
            // void OnBombPlanted; // 0x0
            // void OnBombDefused; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBombTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBombTarget) == 0x948);
    };
};
