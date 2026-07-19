#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Standard-layout class: true
        // Size: 0xf8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_EnvWindShared
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x8            
            // metadata: MNotSaved
            std::uint32_t m_iWindSeed; // 0xc            
            std::uint16_t m_iMinWind; // 0x10            
            std::uint16_t m_iMaxWind; // 0x12            
            std::int32_t m_windRadius; // 0x14            
            std::uint16_t m_iMinGust; // 0x18            
            std::uint16_t m_iMaxGust; // 0x1a            
            float m_flMinGustDelay; // 0x1c            
            float m_flMaxGustDelay; // 0x20            
            float m_flGustDuration; // 0x24            
            std::uint16_t m_iGustDirChange; // 0x28            
            // metadata: MNotSaved
            std::uint16_t m_iInitialWindDir; // 0x2a            
            // metadata: MNotSaved
            float m_flInitialWindSpeed; // 0x2c            
            // metadata: MNotSaved
            VectorWS m_location; // 0x30            
            // metadata: MNotSaved
            // m_hEntOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntOwner;
            char m_hEntOwner[0x4]; // 0x3c            
            uint8_t _pad0040[0xb8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_flStartTime) == 0x8);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_iWindSeed) == 0xc);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_iMinWind) == 0x10);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_iMaxWind) == 0x12);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_windRadius) == 0x14);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_iMinGust) == 0x18);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_iMaxGust) == 0x1a);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_flMinGustDelay) == 0x1c);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_flMaxGustDelay) == 0x20);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_flGustDuration) == 0x24);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_iGustDirChange) == 0x28);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_iInitialWindDir) == 0x2a);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_flInitialWindSpeed) == 0x2c);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_location) == 0x30);
        static_assert(offsetof(source2sdk::client::C_EnvWindShared, m_hEntOwner) == 0x3c);
        
        static_assert(sizeof(source2sdk::client::C_EnvWindShared) == 0xf8);
    };
};
