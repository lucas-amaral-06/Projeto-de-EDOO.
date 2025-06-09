import type { Metadata } from "next";

export const metadata: Metadata = {
  title: "Clínica EDOO",
  description: "Clínica EDOO",
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html lang="pt-BR">
      <body className={`antialiased`}>{children}</body>
    </html>
  );
}
