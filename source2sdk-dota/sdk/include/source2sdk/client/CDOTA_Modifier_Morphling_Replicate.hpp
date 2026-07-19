#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_EconItemView;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1af0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_Replicate : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTinyTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTinyTreeWearable;
            char m_hTinyTreeWearable[0x4]; // 0x1a58            
            float m_flBaseAttackRange; // 0x1a5c            
            float m_flBaseMovementSpeed; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            CUtlSymbolLarge m_iszModelName; // 0x1a68            
            CUtlSymbolLarge m_iszProjectileName; // 0x1a70            
            source2sdk::client::HeroFacetKey_t m_nFacetKey; // 0x1a78            
            CUtlSymbolLarge m_iszOriginalModel; // 0x1a80            
            source2sdk::client::HeroID_t m_nCopiedHeroID; // 0x1a88            
            float m_fOriginalModelScale; // 0x1a8c            
            // m_vecOriginalItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconItemView*> m_vecOriginalItems;
            char m_vecOriginalItems[0x18]; // 0x1a90            
            uint8_t _pad1aa8[0x30]; // 0x1aa8
            float m_flOriginalStr; // 0x1ad8            
            float m_flOriginalAgi; // 0x1adc            
            float m_flOriginalInt; // 0x1ae0            
            std::int32_t m_iOriginalAttackCapability; // 0x1ae4            
            float m_flOriginalHealthPercentage; // 0x1ae8            
            float m_flOriginalManaPercentage; // 0x1aec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Replicate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Morphling_Replicate) == 0x1af0);
    };
};
